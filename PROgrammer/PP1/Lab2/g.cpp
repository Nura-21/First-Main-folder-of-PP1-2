#include <iostream>
using namespace std;
int main()
{
    int num, max, min,n;
    cin>>n;
    //printf ("Enter four numbers: ");
    scanf ("%d", &num);
    max = min = num;
    
    for (int i = 0; i < n-1; i++)
    
    { 
        scanf ("%d", &num);
        if (max < num)
            max = num;
        else if (min > num)
            min = num;
    }

    //printf ("The smallest and largest of given four numbers are %d and %d respectively.\n", min,  max);
    cout<<max<<endl;
    return 0;
}