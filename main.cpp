#include <QCoreApplication>
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

     /* for (int k = -1; k < numz[i]; k++){

          cout << numz[i] << endl;

       }*/

     }

   // int q = 0;
   // while (q > store[i]){
       cout <<"this is store " << store[i] << endl;
   // }

    return a.exec();
}
