//  ranges of 256 caharcters that are strings
//  "a"=> 97 "b"=> 98 and so on upto z;
//  "A"=? 65 and "B"=>66 and so on;

// string s="geeksforgeeks";
// cout<<s.find("geeks");   // index-0; repeated twice but will return only the first occurance;
// cout<<s.find("for");     // index->5
//  cout s.substr(1,2);       //->ee s.substr(start,length);

// given two strings check that they are anagram or not?
// i->"geeks" s2="ekeeg";
// o-> yes

//i->s1="aabcd"  s2="abccd";
// o-> No

#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;
bool anagram(string s1, string s2)

{
    if (s1.length() != s2.length())
    {
        return false;
    }
    int count[256] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        count[s2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {

            return false;
        }
    }
    return true;
}

// Time Complexity->big O(n)

// Given string that repeats leftmost itself;

// i->str="geeksforgeeks";
// o->// Index of "g"(0)

// str="abbcc";
//o->index  of "b"(1)

// str="abcd"
// o->-1

int firstRepeating(string str)
{
    int res = INT_MAX;
    int f1[256] = {-1};
    for (int i = 0; i < str.length(); i++)
    {
        if (f1[str[i]] == -1)
        {
            f1[str[i]] = i;
        }
        else
        {
            res = min(res, f1[str[i]]);
        }
    }
    return (res = INT_MAX) ? -1 : res;
}

//More better Approach

// traverse from the right;

int firstRepeatingSECOND(string str)
{
    int res = INT_MAX;
    int f1[256] = {-1};
    for (int i = str.length(); i >= 0; i++)
    {
        if (f1[str[i]] == -1)
        {
            f1[str[i]] = i;
        }
        else
        {
            res = f1[str[i]];
        }
    }
    return (res = INT_MAX) ? -1 : res;
}

// gievn astring find the leftmost character that deosnt repeat;

// i-> str="geeksforgeeks"
// o-> 5(index of the f);

// i-> str="abcabc";
// o-> -1

int firstNotrepeating(string str)
{
    int res = INT_MAX;
    int f1[256] = {-1};
    for (int i = 0; i < str.length(); i++)
    {
        if (f1[str[i]] == -1)
        {
            f1[str[i]] = i;
        }
        else
        {
            f1[str[i]] = -2;
        }
    }
    for (int i = 0; i < 256; i++)
    {
        if (f1[i] >= 0)
        {
            res = min(res, f1[i]);
        }
    }
    return (res = INT_MAX) ? -1 : res;
}

// string find the lexicographical rank of it

// str="BAC:
// o->3;

//i-> str="CBA";
// o->6

// Example Rank of"STRING"=> 4 *5! + 4 *4! + 3*3! + 1* 2! + 1* 1! +1
int fact(int n)
{
    if (n == 0)
        return 1;
    else
    {

        return n * fact(n - 1);
    }
}

int lexRank(string str)
{
    int res = 1;
    int n = str.length();
    int mal = fact(n);
    int rank = 0;
    int count[256] = {0};
    for (int i = 0; i < n; i++)
    {
        count[str[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        mal = mal / (n - 1);
        rank = rank + count[str[i] - 1] * mal;
        for (int j = str[i]; j < 256; j++)
        {
            count[j]--;
        }
    }
    return rank;
}

//text string and pattern string find if a permutation of the pattern exist in the text?

// i-> text="geeksforgeeks";
//      pattern="egek"
// o-> yes;

// i-> text="geeksforgeeks"
//      patterns ="gks";
//o-> No;

bool AnagramPresent(string text, string part)
{
    int countText[256] = {0};
    int countPart[256] = {0};
    for (int i = 0; i < part.length(); i++)
    {
        countPart[part[i]]++;
        countText[text[i]]++;
    }
    for (int i = part.length(); i < text.length(); i++)
    {
        // if (arSame(countText, countPart))
        {
            return true;
        }
        countText[text[i]]++;
        countText[text[i - part.length()]]--;
    }
    return false;
}

//gievn two string find ifthey are the rotations of each other

// i-> "ABCD" s2="CDAB";
// 0>true

// i-> s1 ="ABAA" s2="AAAB";
// o-> true;

bool areRotations(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    s1 = s1 + s1;
    return (s1.find(s2) != string::npos);
}

// Pattern searching algorithms;

// i-> text="ABABABAB";
// pattern->"ABAB";
// o-> 0 2

void search(string text, string pat)
{
    int n = text.length();
    int m = pat.length();
    for (int i = 0; i < n - m; i++)
    {
        for (int j = 0; i < m; i++)
        {
            if (text[i + j] != pat[j])
            {
                break;
            }
            if (j == m)
            {
                cout << i << " ";
            }
        }
    }
}

// text="ABCDABCE";
// pat-> "ABCE";

void search(string text, string pat)
{
    int n = text.length();
    int m = pat.length();
    for (int i = 0; i < n - m; i++)
    {
        for (int j = 0; i < m; i++)
        {
            if (text[i + j] != pat[j])
            {
                break;
            }
            if (j == m)
            {
                cout << i << " ";
            }
            if (j == 0)
            {
                i++;
            }
            else
            {
                i = i + j;
            }
        }
    }
}

//naive algorithms :O(n-m+1)*m;
// naive :O(n) when all the characters in patterns are distinct;

// pre-process pattern -> rabin krap O(n-m+1) *m;
//              in the worst case but works better on the average;
//              kmp-> O(n) in the worst case;

//preprocess text-> Suffix tree -> O(m) in the worst case;

// Rabin carp ->  first we match the hash functions if they are matching then we proceed to the actual mathing!
// its same as the naive case in the wosrt case;

//KMP -> we preprocess the patterns to the handle redundencies with in the pattern
// text="AAAAAB";
// pattern->"AAAB";
// preprocess and keep assume that first three letters are same and then compute the same for other things;

// what we do actually
//      A A A A
//lps[] 0 1 2 3

//      A B A B
//lps[] 0 0 1 2

// A B C D
// 0 0 0 0