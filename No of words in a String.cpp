#include <iostream>
using namespace std;
int main()
{
    char array[50];
    int a=0,count=0;
    
    cout<<"Enter a sentence: ";
    cin.getline(array,50);
    while(1)
    {
        if(array[a]==' '||array[a]=='\0')
        {
            count++;
            if(array[a]=='\0')
            break;
        }
        a++;
    }
    cout<<"There are "<<count<<" words in the string";
    return 0;
}
