/***

1.  *****
    *****
    *****
    *****
    *****

2.  *
    **
    ***
    ****
    *****


3.  *****
    ****
    ***
    **
    *


4.  1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5


5.  *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *


6.       *
        **
       ***
      ****
     *****


7.   *****
      ****
       ***
        **
         *


8.      *
       ***
      *****
     *******
    *********


9.  *********
     *******
      *****
       ***
        *


10.      *
        * *
       * * *
      * * * *
     * * * * *


11.  * * * * *
      * * * *
       * * *
        * *
         *


12.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *


13.      *
        * *
       *   *
      *     *
     *********


14.  *********
      *     *
       *   *
        * *
         *


15.      *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *


16.           1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1


17.      1
        212
       32123
      4321234
       32123
        212
         1


18.   **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********


19.    *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *


20.    ****
       *  *
       *  *
       *  *
       ****

21.    1
       2  3
       4  5  6
       7  8  9  10
       11 12 13 14 15

22.    1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1

23.        *      *
         *   *  *   *
       *      *      *

24.    *        *
       **      **
       * *    * *
       *  *  *  *
       *   **   *
       *   **   *
       *  *  *  *
       * *    * *
       **      **
       *        *

25.       *****
         *   *
        *   *
       *   *
      *****

26.   1 1 1 1 1 1
      2 2 2 2 2
      3 3 3 3
      4 4 4
      5 5
      6

27.   1 2 3 4  17 18 19 20
        5 6 7  14 15 16
          8 9  12 13
            10 11

28.      *
        * *
       * * *
      * * * *
     * * * * *
      * * * *
       * * *
        * *
         *

29.      
       *        *
       **      **
       ***    ***
       ****  ****
       **********
       ****  ****
       ***    ***
       **      **
       *        *

30.         1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4
    5 4 3 2 1 2 3 4 5


31.      4 4 4 4 4 4 4  
         4 3 3 3 3 3 4   
         4 3 2 2 2 3 4   
         4 3 2 1 2 3 4   
         4 3 2 2 2 3 4   
         4 3 3 3 3 3 4   
         4 4 4 4 4 4 4   

32.    E
       D E
       C D E
       B C D E
       A B C D E

33.    a
       B c
       D e F
       g H i J
       k L m N o
     
34.    E D C B A
       D C B A
       C B A
       B A
       A
       
35.    1      1
       12    21
       123  321
       12344321
**/
#include<iostream>
#include <algorithm>
using namespace std;

int Pattern1(int n){
    for(int rows=0; rows<n; rows++){
        for(int cols=0; cols<n; cols++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}
int Pattern2(int n){
    for(int rows=0; rows<n; rows++){
        for(int cols=0; cols<rows; cols++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int Pattern3(int n){
    for(int rows=0; rows<n; rows++){
        for(int cols=0; cols<n-rows; cols++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int Pattern4(int n){
    for(int rows=1; rows<=n; rows++){
        for(int cols=1; cols<=rows; cols++){
            cout<<cols<<" ";
        }
        cout<<endl;
    }
}
int Pattern5(int n){
    for(int rows=0; rows<=2*n; rows++){
        int TotalColsInParticularRow = rows>n ? 2*n-rows : rows;
        for(int cols=0; cols<=TotalColsInParticularRow; cols++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
int Pattern28(int n){
    for(int rows=0; rows<=2*n; rows++){
        int TotalColsInParticularRow = rows>n ? 2*n-rows : rows;
        int noOfspaces = n-TotalColsInParticularRow;
        for(int s=0; s<noOfspaces; s++){
            cout<<" ";
        }
        for(int cols=0; cols<=TotalColsInParticularRow; cols++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int Pattern30(int n){
    for(int rows=1; rows<=n; rows++){
        for(int s=0; s<n-rows; s++){
            cout<<"  ";
        }
        for(int cols=rows; cols>=1; cols--){
            cout<<cols<<" ";
        }
        for(int cols=2; cols<=rows; cols++){
            cout<<cols<<" ";
        }
        cout<<endl;
    }
}
int Pattern17(int n){
    for(int rows=1; rows<=2*n; rows++){
        int TotalColsInParticularRow = rows>n ? 2*n-rows : rows;
        for(int s=0; s<n-TotalColsInParticularRow; s++){
            cout<<" ";
        } 
        for(int cols=TotalColsInParticularRow; cols>=1; cols--){
            cout<<cols;
        }
        for(int cols=2; cols<=TotalColsInParticularRow; cols++){
            cout<<cols;
        }
        cout<<endl;
    }
}
int Pattern31(int n){
    int totalrows = 2*n-1;
    for(int rows=1; rows<=totalrows; rows++){
        for(int cols=1; cols<=totalrows; cols++){
        int min1 = rows<=totalrows-rows ? rows -1 : totalrows-rows;
       
        int min2 = cols<=totalrows-cols ? cols -1: totalrows-cols;
        
        int min = min1<=min2 ? min1 : min2;
          
        cout<<n-min<<" ";
        }
        cout<<endl;
    }
}




int main(){
    //Pattern1(4);
    //Pattern2(5);
    //Pattern3(5);
    //Pattern4(5);
    //Pattern5(5);
    //Pattern28(5);
    //Pattern30(5);
    //Pattern17(4);
    //Pattern31(4);
}