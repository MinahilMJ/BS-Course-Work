"""
Created on Mon April 30

@author: Minahil
"""

import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
import pickle
import pandas as pd
df=pd.read_csv("train.csv")
df

df['Age'].fillna(df['Age'].mean(),inplace=True)

df['Embarked'].fillna(df['Embarked'].mode()[0],inplace=True)

df['Sex']=df['Sex'].map({'male':0, 'female':1})

df=pd.get_dummies(df,columns=["Embarked"])


X=df[['Pclass', 'Sex', 'Age', 'SibSp', 'Parch', 'Fare', 'Embarked_C', 'Embarked_Q', 'Embarked_S']]

Y=df['Survived']

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test=train_test_split(X, Y, test_size=0.2,random_state=42)


from sklearn.linear_model import LogisticRegression

model=LogisticRegression()
model.fit(X_train, y_train)
model=LogisticRegression(max_iter=1000)

model.fit(X_train, y_train)
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import accuracy_score, classification_report
# Create a scaler object
scaler = StandardScaler()

# Fit on training data and transform both training and testing data
X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)

# Fit the model on the scaled data
model = LogisticRegression(max_iter=100)
model.fit(X_train_scaled, y_train)

# Evaluate the model on the scaled test data
#y_pred = model.predict(X_test_scaled)
#print("Accuracy:", accuracy_score(y_test, y_pred))

# Saving model to disk
pickle.dump(model, open('titanic.pkl','wb'))

# Loading model to compare the results
model = pickle.load(open('titanic.pkl','rb'))

print(model.predict([[1, 0, 24,  1,  0, 7, 1, 0, 0]]))

