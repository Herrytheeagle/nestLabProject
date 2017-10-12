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
}*/


/*#include <iostream>
#include <cmath>

using namespace std;


 int miniMax(int values[0],int is_min = true){
     int i=20;
     int minValue[0];
     values[0]=values[i];

     values[i]={12,34,23,14,12,67,89,3,2,1,9,45};

     if (is_min = true) {

         for (int k = 0; k < values[i]; k+=2){
             values[i]=minValue[i];
         }

     }
     miniMax();
     return minValue[i];
 }


 int maxMini(int values[0],int is_max = false){
     int i=20;
     int maxValue[0];
     values[0]=values[i];

     values[i]={12,34,23,14,12,67,89,3,2,1,9,45};

     if (is_max = false) {

         for (int k = 0; k < values[i]; k+=2){
             values[i]=maxValue[i];
         }

     }
     maxMini();
     return maxValue[i];
 }

 int nash_equilibrum(){
     bool is_min = true;
     bool is_max = false;

     if(is_min=true || is_max=false){
         miniMax(values[i],true);
         maxMini(values[i],false);
     }


  return 0;
 }

     int main ()
     {

       nash_equilibrum();

       return 0;
     }*/

#include<bits/stdc++.h>
using namespace std;

// Returns the optimal value a maximizer can obtain.
// depth is current depth in game tree.
// nodeIndex is index of current node in scores[].
// isMax is true if current move is of maximizer, else false
// scores[] stores leaves of Game tree.
// h is maximum height of Game tree
int minimax(int depth, int nodeIndex, bool isMax,
            int scores[], int h)
{
    // Terminating condition. i.e leaf node is reached
    if (depth == h)
        return scores[nodeIndex];

    //  If current move is maximizer, find the maximum attainable
    // value
    if (isMax)
       return max(minimax(depth+1, nodeIndex*2, false, scores, h),
            minimax(depth+1, nodeIndex*2 + 1, false, scores, h));

    // Else (If current move is Minimizer), find the minimum
    // attainable value
    else
        return min(minimax(depth+1, nodeIndex*2, true, scores, h),
            minimax(depth+1, nodeIndex*2 + 1, true, scores, h));
}

// A utility function to find Log n in base 2
int log2(int n)
{
  return (n==1)? 0 : 1 + log2(n/2);
}

// Driver code
int main()
{
    // The number of elements in scores must be
    // a power of 2.
    int scores[] = {80, 5, 2, 9, 100, 5, 23, 23};
    int n = sizeof(scores)/sizeof(scores[0]);
    int h = log2(n);
    int res = minimax(0, 0, true, scores, h);
    int res1 = minimax(0, 0, false, scores, h);

    cout << "The miniMax value is : " << res << endl;
    cout << "The maxMini value is : " << res1 << endl;

    return 0;
}



/*#include<iostream>

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
}*/


