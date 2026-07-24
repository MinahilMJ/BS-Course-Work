//21L-5679
//Assignment 02

#include <iostream>
#include <fstream>
using namespace std;

class teacher
{
	string Name;							//(string)
	string Address;							//(string)
	string Contact_Info;					//(string)
	string email_address;					//(string)
	string institution;						//(string)
	string department;						//(string)
	char type;								//[permanent / visiting](char)
	string designation;						//[Lecturer, Assistant Professor, Associate Professor, professor](string)
	char allocated_courses[10];			//[it should be an array of string which can store the names of at - least 3 subjects]
	int credit_hours[10];					//[an array of int which stores the credit hours against the allocated courses e.g., PF is 4 credit hours course]
	int credit_hours_per_week[10];			/*[do not prompt the user to enter credit hours per week rather calculate this from credit
											hours array].This should be used to calculate the salary of visiting faculty members.*/
	float monthly_salary;					//[do not prompt the user to enter monthly salary, calculate it by using the criteria given below]
	int experience;							//[value should be in the range of 0 - 4](int)
	int  publications;						//(int)
	string qualification;					//[Masters, doctorate, post - doctorate](string)
public:
    //getter functions
    void setName(string n)
    {
        Name=n;
    }

    void setAddress(string Ad)
    {
       Address=Ad;
    }

    void setContact_info(string CI)
    {
        Contact_Info=CI;
    }

    void setEmail(string E)
    {
        email_address=E;
    }

    void setInstitute(string inst)
    {
        institution=inst;
    }

    void setDepartment(string d)
    {
        department=d;
    }

    void setType(char t)
    {
        type=t;
    }


    void setDesignation(string des)
    {
        designation=des;
    }

    void setCourses(char cors[10])
    {
        allocated_courses[10]=cors[10];
    }

    void setCredit(int crd[10])
    {
        credit_hours[10]=crd[10];
    }

    void setCreditPerWeek(int CPW[10])
    {
        credit_hours_per_week[10]=CPW[10];
    }

    void setSalary(float sal)
    {
        monthly_salary=sal;
    }

    void setExperience(int exp)
    {
        experience=exp;
    }

    void setPublications(int p)
    {
        publications=p;
    }

    void setQualifications(string q)
    {
        qualification=q;
    }

    //setter functions
    string getName()
    {
        return Name;
    }

    string getAddress()
    {
        return Address;
    }

    string getContact_info()
    {
        return Contact_Info;
    }

    string getEmail()
    {
        return  email_address;
    }

    string getInstitute()
    {
        return institution;
    }

    string getDepartment()
    {
        return department;
    }

    char getType()
    {
        return type;
    }


    string getDesignation()
    {
        return designation;
    }

    char getCourses()
    {
        return allocated_courses[10];
    }

    int getCredit()
    {
        return credit_hours[10];
    }

    int getCreditPerWeek()
    {
        return credit_hours_per_week[10];
    }

    float getSalary()
    {
        return monthly_salary;
    }

    int getExperience()
    {
        return experience;
    }

    int getPublications()
    {
        return publications;
    }

    string getQualifications()
    {
        return qualification;
    }

    //display function
    void showData()
    {
        cout<<"Name: "<<Name<<endl<<"Address: "<<Address<<endl<<"Contact Info: "<<Contact_Info<<endl<<"Email Address: "<<email_address<<endl<<
              "Institution: "<<institution<<endl<<"Department: "<<department<<endl<<"Type: "<<type<<endl<<"Designation: "<<designation<<endl<<
              "Allocated Courses: "<<allocated_courses<<endl<<"Credit Hours: "<<credit_hours<<endl<<"Credit hours per Week: "<<credit_hours_per_week<<endl<<"Monthly Salary: "<<monthly_salary<<endl<<
              "Experience: "<<experience<<endl<<"Publications: "<<publications<<endl<<"Qualification: "<<qualification<<endl;
    }
    //SALARY
    void calculateSalary()
    {
        int i;
        for( i=0;i<4;i++)
        {
            credit_hours_per_week[i]+=credit_hours[i];
        }
        int total_crd[10];
        total_crd[10]=4*credit_hours_per_week[10];
        float increment=0;
        float salary=0;
        //VISITING FACULTY
        if(type=='v' || type=='V')
        {
            if(designation=="lecturer" ||designation=="Lecturer")
            {
                if(experience==1)
                {
                    salary=2000;
                    increment=2000*(5/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==2)
                {
                    salary=2000;
                    increment=2000*(10/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==3)
                {
                    salary=2000;
                    increment=2000*(15/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==4)
                {
                    salary=2000;
                    increment=2000*(20/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }
            }

            else if(designation=="Assistant Professor" ||designation=="assistant professor")
            {
                if(experience==1)
                {
                    salary=4000;
                    increment=4000*(5/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==2)
                {
                    salary=4000;
                    increment=4000*(10/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==3)
                {
                    salary=4000;
                    increment=4000*(15/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==4)
                {
                    salary=4000;
                    increment=4000*(20/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }
            }
            else if(designation=="Associate Professor" ||designation=="associate professor")
                {
                    if(experience==1)
                    {
                        salary=7000;
                        increment=7000*(5/10);
                        salary=salary+increment;
                        monthly_salary=salary*total_crd[10];
                        publications=publications*8000;
                        monthly_salary=monthly_salary+publications;
                    }

                    else if(experience==2)
                    {
                        salary=7000;
                        increment=7000*(10/10);
                        salary=salary+increment;
                        monthly_salary=salary*total_crd[10];
                    }

                    else if(experience==3)
                    {
                        salary=7000;
                        increment=7000*(15/10);
                        salary=salary+increment;
                        monthly_salary=salary*total_crd[10];
                        publications=publications*8000;
                        monthly_salary=monthly_salary+publications;
                    }

                    else if(experience==4)
                    {
                        salary=7000;
                        increment=7000*(20/10);
                        salary=salary+increment;
                        monthly_salary=salary*total_crd[10];
                        publications=publications*8000;
                        monthly_salary=monthly_salary+publications;
                    }
                }

            else if(designation=="Professor" ||designation=="professor")
            {
                if(experience==1)
                {
                    salary=9000;
                    increment=9000*(5/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==2)
                {
                    salary=9000;
                    increment=9000*(10/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==3)
                {
                    salary=9000;
                    increment=9000*(15/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==4)
                {
                    salary=9000;
                    increment=9000*(20/10);
                    salary=salary+increment;
                    monthly_salary=salary*total_crd[10];
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }
        }
    else if(type=='p' || type=='P')
        {
            if(designation=="lecturer" ||designation=="Lecturer")
            {
                if(experience==1)
                {
                    salary=10000;
                    increment=10000*(5/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==2)
                {
                    salary=10000;
                    increment=10000*(10/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==3)
                {
                    salary=10000;
                    increment=10000*(15/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==4)
                {
                    salary=10000;
                    increment=10000*(20/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }
            }

            else if(designation=="Assistant Professor" ||designation=="assistant professor")
            {
                if(experience==1)
                {
                    salary=175000;
                    increment=175000*(5/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==2)
                {
                    salary=175000;
                    increment=175000*(10/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==3)
                {
                    salary=175000;
                    increment=175000*(15/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==4)
                {
                    salary=175000;
                    increment=175000*(20/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }
            }
            else if(designation=="Associate Professor" ||designation=="associate professor")
                {
                    if(experience==1)
                    {
                        salary=250000;
                        increment=250000*(5/10);
                        salary=salary+increment;
                        monthly_salary=salary;
                        publications=publications*8000;
                        monthly_salary=monthly_salary+publications;
                    }

                    else if(experience==2)
                    {
                        salary=250000;
                        increment=250000*(10/10);
                        salary=salary+increment;
                        monthly_salary=salary;
                        publications=publications*8000;
                        monthly_salary=monthly_salary+publications;
                    }

                    else if(experience==3)
                    {
                        salary=250000;
                        increment=250000*(15/10);
                        salary=salary+increment;
                        monthly_salary=salary;
                        publications=publications*8000;
                        monthly_salary=monthly_salary+publications;
                    }

                    else if(experience==4)
                    {
                        salary=250000;
                        increment=250000*(20/10);
                        salary=salary+increment;
                        monthly_salary=salary;
                        publications=publications*8000;
                        monthly_salary=monthly_salary+publications;
                    }
                }

            else if(designation=="Professor" ||designation=="professor")
            {
                if(experience==1)
                {
                    salary=325000;
                    increment=325000*(5/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==2)
                {
                    salary=325000;
                    increment=325000*(10/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==3)
                {
                    salary=325000;
                    increment=325000*(15/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }

                else if(experience==4)
                {
                    salary=325000;
                    increment=325000*(20/10);
                    salary=salary+increment;
                    monthly_salary=salary;
                    publications=publications*8000;
                    monthly_salary=monthly_salary+publications;
                }
            }
        }
    }
}
    void updateRecord()
    {
        int no;
        cout<<"Press 1 to update qualification "<<endl
            <<"Press 2 to update conact "<<endl
            <<"Press 3 to update institution "<<endl;
        cin>>no;
        if(no==1)
        {
            getline(cin,qualification);
        }
        else if(no==2)
        {
            getline(cin,Contact_Info);
        }
        else if(no==3)
        {
            getline(cin,institution);
        }
        cout<<qualification;
        cout<<Contact_Info;
        cout<<institution;
    }
};

int main()
{
    teacher t1[5];
    ifstream myFile;
    string word;
    myFile.open("myData.txt");
    cout<<"File is loaded "<<endl;
    //myFile>>word;
    for(int a=0;a<2;a++)
    {
        myFile>>word;
        t1[a].setName(word);

        myFile>>word;
        t1[a].setAddress(word);

        myFile>>word;
        t1[a].setContact_info(word);

        myFile>>word;
        t1[a].setEmail(word);

        myFile>>word;
        t1[a].setInstitute(word);

        myFile>>word;
        t1[a].setDepartment(word);

        char ty;
        myFile>>ty;
        t1[a].setType(ty);

        myFile>>word;
        t1[a].setDesignation(word);

        char co[10];
        myFile>>co[10];
        /*t1[a].setCourses(co);*/

        /*char cor[10]="";
        for(int b=0;b<4;b++)
        {
            if(co[b]==',')
            {
                t1[a].setCourses(cor);
//                cor[10]="";
            }
            else
            {
                cor[10]+=co[b];
            }
        }
*/
        int cr[10];
        myFile>>cr[10];
        t1[a].setCredit(cr);
       /* int cr[10];
        myFile>>co[10];*/
      /*  for(int b=0;b<4;b++)
        {
            if(co[b]==',')
            {
                t1[a].setCredit(cr);
            }
            else
            {
                cor[10]+=co[b];
            }
        }*/

        int ccr[10];
        myFile>>ccr[10];
        t1[a].setCreditPerWeek(ccr);

        float ssal;
        myFile>>ssal;
        t1[a].setSalary(ssal);

        int pub;
        myFile>>pub;
        t1[a].setPublications(pub);

        myFile>>word;
        t1[a].setQualifications(word);
        t1[a].showData();

    }
//    t1.showData();
    return 0;
}
