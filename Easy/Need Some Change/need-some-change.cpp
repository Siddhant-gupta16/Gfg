//{ Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*Function to swap array elements
* arr : array input
* sizeof_array : number of elements in array
*/
class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        
        int i=0;
        int j =2;
        
        while(j<sizeof_array){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        
    }
};

//{ Driver Code Starts.

// Driver code to test swapElements
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    for(int i = 0;i<sizeof_array;i++){
	        cin >> arr[i];
	    }
        Solution obj;
        // calling function to swap the array swap elements
	    obj.swapElements(arr, sizeof_array);
	    
	    // Printing the modified array
	    for(int i = 0;i<sizeof_array;i++){
            cout << arr[i] << " ";
        }
	    
	    cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends