
#include <iostream>
using namespace std;

/*int factorial(int n){
    cout << n << endl;
    if(n==0){
        return 1;
    }
    int smalleroutput = factorial(n-1);
    return n*smalleroutput;
}*/
// power of x^n
/*int power(int x,int n,int count){
    if (count == n){
        return 1;
    }
    count = count+1;
    int smalleroutput = power(x,n,count);
    return x*smalleroutput;


}*/
// fibonacci number

/*int fib(int x){
    if (x==1 || x ==2 ){
        return 1;
    }
    int oneoutput = fib(x-1);
    int twooutput = fib(x-2);
    return  oneoutput + twooutput;
}*/

/*bool issorted(int arr[],int size){
    if(size==0 || size == 1){
        return true;
    }
    if (arr[0] > arr[1]){
        return false;
    }
    bool issmallsorted = issorted(arr+1,size-1);
    return issmallsorted;
}*/

/*int sumarray(int arr[],int size){
    if(size == 1){
        return arr[0];
    }
    int smalleroutput = sumarray(arr+1,size-1);
    return arr[0] + smalleroutput;
}*/

/*bool isxpresent(int arr[],int size,int x){
    if(size == 0){
        return false;
    }
    if (arr[0] == x){
        return true;
    }
    bool smalleroutput = isxpresent(arr+1,size-1,x);
    return smalleroutput;
}*/
/*int firstindex(int arr[],int size,int x,int j){
    if(size == 0){
        return -1;
    }
    if (arr[0] == x){
        return j;

    }
    j = j+1;
    firstindex (arr+1,size-1,x,j);


}*/

int lastindex(int arr[], int size, int x, int j)
{
    if (size == 0)
    {
        return -1;
    }
    j = j + 1;
    int smalleroutput = lastindex(arr + 1, size - 1, x, j);
    if (smalleroutput != -1)
    {
        return smalleroutput;
    }
    else
    {
        if (arr[0] == x)
        {
            return j;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    // int n,x;
    // cin >> x >> n;
    int arr[9] = {13, 4, 5, 89, 76, 6, 5, 76, 89};
    int size = 9;
    int x = 76;
    // int output = factorial(n);
    // int output = power(x,n,0);
    // int output = fib(x);
    // bool output =  issorted(arr,size);
    // int output = sumarray(arr,3);
    // bool output = isxpresent(arr,5,10);
    // int output = firstindex(arr,size,x,0);
    int output = lastindex(arr, size, x, -1);
    cout << output;
}

// al indices of number in an array

#include <iostream>
using namespace std;
// first approach
/*int returnindices(int arr[],int x,int size,int output[]){
  if(size == 0 ){
    return 0;
  }
  //recursive call
  int ans = returnindices(arr+1,x,size-1,output);
  //increasing the elements of output by one
  for(int i = 0;i < ans;i++){
    output[i] = output[i] +1;
  }
  //checking the value of x
  if (arr[0] == x){
    //shifying the values of output
    for(int i = ans-1;i>=0;i--){
      output[i+1] = output[i];
    }
    output[0] = 0;
    return ans + 1;
  }
  else{
    return ans;
  }

}*/

// second approach
int returnindices(int arr[], int x, int size, int output[])
{
    if (size == 0)
    {
        return 0;
    }
    // recursive call
    int ans = returnindices(arr, x, size - 1, output);

    // checking the value of x
    if (arr[size - 1] == x)
    {
        output[ans] = size - 1;
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{
    int arr[5] = {9, 8, 10, 8, 8};
    int size = 5;
    int x = 8;
    int output[size];
    int lenofout = returnindices(arr, x, size, output);
    for (int i = 0; i < lenofout; i++)
    {
        cout << output[i] << " ";
    }
}