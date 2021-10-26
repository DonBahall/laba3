#include <iostream>
#include <string.h>
using namespace  std;
int main() {
char letter ;
    char words[] = "ayvkua bdkwyb, cjqc, ditjd";
    cout<<"write a letter ";
    cin>>letter;
    char delimiters[] = " ;,!\t\n";
    char *Curworld = strtok(words, delimiters);
    while (Curworld) {
        int last = strlen(Curworld)-1;
        if ((Curworld[0] == letter ) && (Curworld[last] == letter )){
            cout<<Curworld<<" ";
       }
        Curworld = strtok(NULL, delimiters);

    }


}