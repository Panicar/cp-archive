#include <bits/stdc++.h>

void SplitString(const std::string& s, std::string& part1, std::string& part2) {
    size_t pos = s.find('+');
    if (pos == std::string::npos) 
    {
        part1 = s;
        part2 = "";
        return;
    }

    part1 = s.substr(0, pos);
    part2 = s.substr(pos + 1);
}

std::string IntToRoman(int num)
{
    std::string romanNumeral = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) 
    {
        while (num >= values[i]) 
        {
            num -= values[i];
            romanNumeral += symbols[i];
        }
    }

    return romanNumeral;
}

int RomanToInt(const std::string& str)
{
    std::map<char, int> mp;
    int result = 0, prev = 0;

    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    for (int i = str.size() - 1; i >= 0; i--) 
    {
        int curr = mp[str[i]];
        if (curr < prev) 
        {
            result -= curr;
        } 
        else 
        {
            result += curr;
        }
        prev = curr;
    }

    return result;
}

int main()
{
    std::string str, str1, str2;
    getline(std::cin, str);
    
    SplitString(str, str1, str2);
    
    int sum = RomanToInt(str1) + RomanToInt(str2);
    
    std::cout << IntToRoman(sum);
    
    return 0;
}
