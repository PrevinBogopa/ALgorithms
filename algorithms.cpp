//This program has various and most important algorithms using functions and arrays

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//array initialization
int arr [5]={2,3,6,1,7};
const int SIZE=sizeof(arr);

//random generation
int randomdigits[SIZE]={};
const int maxOfRandom=20;
const int min=0;

using namespace std;

void Randomgen()
//this fucntion is going to generate random numbers 
{
srand(time(0));

for (int i = 0; i < SIZE; i++)
{
    /* code */
    randomdigits[i]=rand()%(maxOfRandom-min+1)+min;
   
}

//if you do not want it to repeat numbers .....uncomment the code below.
/*int random;
for (int i = 0; i < SIZE; i++)
{
   srand(time(0));
   bool found=false;
for (int j = 0; j < i; j++)
{
   random=rand()%(maxOfRandom-min+1)+min;
   if (random==randomdigits[j])
   {

    found=true;
    break;
   }
   
}
if (found==false)
{
    randomdigits[i]=random;
}
if (found)
{
i=i-1;

}}*/
}

bool/*int or a bool*/ search(int num)
//fucntion to search and display a number and give index number to the int main
{
    bool found=false;
for (int i = 0; i < SIZE; i++)
{
   if (num==arr[i])
   {
   found=true;
   break;
   }
   
}
return found;
}




int sum()
//this will find the sum of all the numbers in array
{
    int totalnum=0;
for (int i = 0; i < SIZE; i++)
{
   totalnum=arr[i]+totalnum;
  
}
return totalnum;
}

void sort()
//this will use an algorithm to sort the numbers either ascending or descending
{
int p=SIZE-1;
int temp;
for (int i = 0; i < SIZE; i++)
{
   for (size_t i = 0; i < p; i++)
   {
    if (arr[i]<arr[i+1])
    {
       temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
    }
    
   }

}

}
int findlowest()
//This will find the lowest number
{
    int low=arr[0];
   for (size_t i = 0; i < SIZE; i++)
   {
    if (low>arr[i])
    {
    
      
       low=arr[i];
    }
    
   }
   return low;

}
int findhigh()
//This will find the highest number
{    int high=arr[0];
   for (size_t i = 0; i < SIZE; i++)
   {
    if (high<arr[i])
    {
    
      
       high=arr[i];
    }
    
   }
   return high;}
void  searchAndReplace(int num,int Replacenum)
//fucntion to search and replace a number.
{

    {
    bool found=false;
for (int i = 0; i < SIZE; i++)
{
   if (num==arr[i])
   {

   found=true;
    arr[i]=Replacenum;
   break;
   }
   
}
if (found==false)
{
    printf("the number not found");
}


}
}
int main(){

    //can declare all function calls and do a display function here..make use of a menuselection to choose the options .
    system("pause");
    return 0;

}