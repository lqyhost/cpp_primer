#include <iostream>
#include <string>

using namespace::std;

int main()
{
    int num_vowel_start = 0;
    int num_consonant_start = 0;
    int num_neither_start = 0;
    char words[30];
    cout<<"Enter words(q to quit): ";
    cin>>words;
    cin.get();
    while(words[0]!='q')
    {
        //cout<<words<<endl;
        switch (words[0])
        {
            case 'a':num_vowel_start +=1;break;
            case 'e':num_vowel_start +=1;break;
            case 'i':num_vowel_start +=1;break;
            case 'o':num_vowel_start +=1;break;
            case 'u':num_vowel_start +=1;break;
            default:
            {
                if (isalpha(words[0]))
                {
                    num_consonant_start +=1 ;
                    break;
                }
                else
                {
                    num_neither_start += 1;
                    break;
                }
            }
        }
        cin>>words;
        cin.get();
    }
    cout<<num_vowel_start<<"words begin with vowels."<<endl;
    cout<<num_consonant_start<<"words begin with consonant."<<endl;
    cout<<num_neither_start<<"words begin with neither."<<endl;
}

