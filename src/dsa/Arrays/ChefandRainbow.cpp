#include <iostream>
using namespace std;
int main() 
{
    int N, T;
	cin>>T;
	
	while( T > 0)
	{
	    cin>>N;
	    int arr[N];
	    
	    if(N % 2 == 0)
	    {
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        for(int i = 0; i < N; i++)
	        {
	            cin>>arr[i];
	        }
	        int middleIndex = N/2;
	        
	        for(int i =0; i < middleIndex; i++)
	        {
	            if(arr[i] != arr[N-1-i])
	            {
	                cout<<"no"<<endl;
                        T--;
	                    break;
	            }
	        }
	        cout<<"yes"<<endl;
	    }
        T--;
	}
		
	return 0;
}

// #include <iostream>
// using namespace std;

// bool isRainbowArray(int arr[], int N) {
//     int mid = N / 2;
    
//     // Check the first half of the array
//     for (int i = 0; i <= mid; i++) {
//         if (arr[i] != i + 1 || arr[i] != arr[N - 1 - i]) {
//             return false;
//         }
//     }
    
//     return true;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;
//         int arr[N];

//         for (int i = 0; i < N; i++) {
//             cin >> arr[i];
//         }

//         if (isRainbowArray(arr, N)) {
//             cout << "yes" << endl;
//         } else {
//             cout << "no" << endl;
//         }
//     }

//     return 0;
// }