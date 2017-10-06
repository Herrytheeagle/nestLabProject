/*#include <QCoreApplication>
#include <iostream>

 using namespace std;

int main(int argc, char *argv[])
{
    int totVal;

    QCoreApplication a(argc, argv);
    qDebug ("This is a progam for implementing Minimax Algoritm");

    qDebug ("Enter the total value of numbers you are willing to input");
    cin >> totVal;

    int store[totVal];
    int i;

    for (i = 0; i<totVal; i++){
     int numz[i];

     qDebug ("You can now enter the numbers");
     cin >> numz[i];
     numz[i] = store[i];

     // for (int k = -1; k < numz[i]; k++){

          cout << numz[i] << endl;

       }//

     }

   // int q = 0;
   // while (q > store[i]){
       cout <<"this is store " << store[i] << endl;
   // }

    return a.exec();
}


#include <iostream>

using namespace std;

 int minMax(int values[0],int is_min){
     is_min=true;


 }*/
#include<iostream>

using namespace std;

int main()
{
    int a[50],n,i,j,temp,k,q[50];
    cout<<"How many numbers are you typing in? ";
    cin>>n;
    cout<<"Enter the numbers: ";

    for(i=0;i<n;++i)
        cin>>a[i];

    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }

    cout<<"numbers after sorting:";
    for(i=0;i<n;++i)
        cout<<" "<<a[i];



    return 0;
}


