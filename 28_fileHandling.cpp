#include<iostream>
#include<string>

using namespace std;


int main(){

    static const char *originalFile = "originalFile.txt";
    static const char * editedFile = "editedFile.txt";


    // rename(originalFile, editedFile);

    remove(editedFile);

    FILE *fh = fopen(originalFile, "w");   // w--> if file exist it opens for writing else create the file

    fclose(fh);



    return 0;
}