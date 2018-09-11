/* **************************************************************************

    * File Name : TEX_Quotes.cpp

    * Creation Date : 2018-09-06 12:33:13

    * Last Modified : 2018-09-11 10:55:09

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <string> //getline()
using namespace std;

int main()
{
    string inputStr; //輸入字串
    int leftQuote = 1; //判斷左括號或右括號

    while(getline(cin, inputStr))
    {
        for(int i = 0; inputStr[i] != '\0'; i++)
        {
            if(inputStr[i] == '"' && leftQuote == 1) //若是左括號
            {
                cout << "``";
                leftQuote = 0;
            }
            else if(inputStr[i] == '"' && leftQuote == 0) //若是右括號
            {
                cout << "''";
                leftQuote = 1;
            }
            else
                cout << inputStr[i]; //非左括號或非右括號則直接印出
        }
        cout << "\n";
    }
    return 0;
}
