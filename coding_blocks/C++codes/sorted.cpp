#include <iostream>

using namespace std;

bool sort(int Arr[], int start, int stop)

{

    if(start>stop)
    { return false;
     }

    for( int i=start; i<stop; i++)

    {

        if(Arr[i]>Arr[i+1])

        {

            int tmp=Arr[i];

            Arr[i]=Arr[i+1];

            Arr[i+1]=tmp;

        }

    }

    

    sort(Arr, start, stop-1);
    return true;

    

}



int main() {

    int n;

    cin>>n;

    int Arr[100];

    int i;

    for(i=0; i<n; i++) cin>>Arr[i];

    

    bool ans = sort(Arr, 0, n-1);

    cout<<boolalpha<<ans;

	return 0;

}