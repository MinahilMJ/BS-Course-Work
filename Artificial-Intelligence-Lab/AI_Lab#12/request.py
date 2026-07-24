import requests

url = 'http://localhost:5000/predict_api'

r = requests.post(url,json={'Pclass':1, 'Sex':0, 'Age': 24, 'SibSp': 1, 'Parch': 0, 'Fare':7, 'Embarked_C':1, 'Embarked_Q':0, 'Embarked_S':0}

print(r.json())

