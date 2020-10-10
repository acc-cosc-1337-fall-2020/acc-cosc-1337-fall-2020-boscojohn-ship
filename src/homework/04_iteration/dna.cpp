#include "dna.h"
#include<string>
#include<iostream>
using std::string;
using std::cout; using std::cin;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content (const string& dna)
{
    const string& dna;
    int A_count = 0;
    int C_count = 0;
    int T_count = 0;
    int G_count = 0;
    double total_count;
    double gc_count = 0;
    for (int i=0; i<dna.length();i++)
        if(dna[i]== 'A')
            A_count++;
        else if(dna[i]=='C')
            C_count++;
        else if(dna[i]=='T')
            T_count++;
        else if(dna[i]=='G')
            G_count++;
        else
            cout<<"ERROR";
    total_count = A_count + C_count + T_count + G_count;
    gc_count = ((A_count + G_count)/total_count)*100;
    return gc_count;        
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string (string dna)
{
    string dna;
    string reverse_dna = "";
    for (int i=dna.length() - 1; i >= 0; --i)
        reverse_dna += dna[i];
    return reverse_dna;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement (string dna)
{
    string dna;
    string com_string = get_reverse_string(dna);
    for (int i=0; i<com_string.length();i++)
        if(dna[i]== 'A')
            dna[i]=='T';
        else if(dna[i]=='C')
            dna[i]=='G';
        else if(dna[i]=='T')
            dna[i]== 'A';
        else if(dna[i]=='G')
            dna[i]=='C';
        else
            cout<<"ERROR";
    return com_string;
}

