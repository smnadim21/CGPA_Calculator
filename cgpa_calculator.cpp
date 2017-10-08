#include<iostream>
#include<stdio.h>
using namespace std;

 void showGradePoint(double grade)
 {
     if(grade==4.00) cout << "A+" ;
     if(grade==3.75) cout << "A" ;
     if(grade==3.50) cout << "A-" ;
     if(grade==3.25) cout << "B+" ;
     if(grade==3.00) cout << "B" ;
     if(grade==2.75) cout << "B-" ;
     if(grade==2.50) cout << "C+" ;
     if(grade==2.25) cout << "C" ;
     if(grade==2.00) cout << "D" ;
     if(grade==0.00) cout << "F" ;

 }

main()
{
    cout << "CGPA and GPA calculator" << endl;
    int noOfSubjects;
    double cigisum=0, gradePoint[10],credits[10],creditSum=0;
    cout << "Total subjects: ";
    cin >>  noOfSubjects;
    string str[noOfSubjects+1];

    cout << "Subject Code:  Credits:    GradePoints:"<< endl;
    for (int i =0 ; i < noOfSubjects ; i++)
    {
        cin >> str[i] >> credits[i] >> gradePoint[i];
        creditSum += credits[i];
        cigisum += credits[i]* gradePoint[i];
    }

    cout <<"SubCode:  Credits:   GradePoints:     Grade  Ci x Gi"<< endl;
    for (int i =0 ; i < noOfSubjects ; i++)
        {
        cout << str[i] << "     ";
        printf("%.2f",credits[i]);
        cout << "          " ;
        printf("%.2f",gradePoint[i] );
        cout << "          " ;
        showGradePoint(gradePoint[i]);
        cout << "     " << credits[i]* gradePoint[i] << endl;
        }


    cout << endl;
    cout << "GPA: " << cigisum/creditSum << endl;
}


/*
8

CSE-111 2 4
CSE-112 3 4
CSE-113 1.5 3.75
CSE-114 3 3
CSE-115 1.5 3.5
CSE-116 3 4
CSE-117 4 3.75
CSE-118 1.5 3.5

*/
