#include<iostream>
using namespace std;

// int firstOccurance(string &haystack, string &needle){

//     int i = 0;
//     string str = "";
//     while (i < (haystack.length()-needle.length())+1)
//     {
//         int k = i;
//         int j = 0;
//         while (j < needle.length())
//         {
//             if(haystack[i] != needle[j] && k != i){
//                 j = 0;
//                 str = "";
//                 k++;
//             }
//             else if(haystack[i] != needle[j] && k == i){
//                 i++;
//                 j = 0;
//                 str = "";
//                 k++;
//             }
//             else{
//                 str += haystack[i];
//                 i++;
//                 j++;
//             }
//         }
//         if(str == needle){
//             return k;
//         }
//         str = "";
//         i++;
        
//     }
    
//     return -1;
// }


// int firstOccurance(string &haystack, string &needle){

//     for (int l = 0; l < (haystack.length()-needle.length()+1); l++)
//     {
//         for (int i = l; i < (haystack.length()-needle.length()+1); i++)
//         {
//             int k = i;
//             string str = "";
//             for (int j = 0; j < needle.length(); j++)
//             {
//                 if (haystack[i] == needle[j])
//                 {
//                     i++;
//                     str += haystack[i];
//                 }
//                 else{
//                     i = l++;
//                 }
                
//             }
//             if(str == needle){
//                 return k;
//             }
            
//         }
        
//     }

//     return -1;
    
// }


int firstOccurance(string &haystack, string &needle){

    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        
        if (j == m) {
            return i;
        }
    }

    return -1;
}



// int firstOccurrence(string &haystack, string &needle) {
//     int n = haystack.size();
//     int m = needle.size();

//     for (int i = 0; i <= n - m; i++) {
//         int j = 0;
//         // Check if the substring from i matches the needle
//         while (j < m && haystack[i + j] == needle[j]) {
//             j++;
//         }
//         // If we matched the entire needle, return the starting index
//         if (j == m) {
//             return i;
//         }
//     }

//     return -1;
// }


int main(){

    string s = "ssadbutsad";
    string t = "sad";
    cout<<firstOccurance(s, t);
}