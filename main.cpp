#include <iostream>

int main()
{
    std::string s = "kajak";
    ifstream f("hasła.txt");
    int suma = 0;
    while(f >> s)
    for(int i = 0; i <= s.size()-1; i++){
        (suma = (int)s[i] + (int)s[i +1];
        if(suma == 220)
        {
            std::cout << s << std::endl;
            break;
        }

    }
}
