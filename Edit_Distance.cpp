#include<bits/stdc++.h>
using namespace std;

int edit_distance(string string1, string string2){
    int len1 = string1.size();
    int len2 = string2.size();
    int edit_distance_matrix[2][len2+1];
    
    for(int index2=0; index2<=len2; index2++){
        edit_distance_matrix[0][index2] = index2;
    }
    
    int index=0;
    
    for(int index1=1; index1<=len1; index1++){
        index = 1-index;
        for(int index2=0; index2<=len2; index2++){
            if(index2 == 0){
                edit_distance_matrix[index][0] = index1;
            }
            else if(string1[index1-1] == string2[index2-1]){
                edit_distance_matrix[index][index2] = edit_distance_matrix[1-index][index2-1];
            }
            else{
                edit_distance_matrix[index][index2] = 1 + min(edit_distance_matrix[index][index2-1], min(edit_distance_matrix[1-index][index2], edit_distance_matrix[1-index][index2-1]));
            }
        }
    }
    
    return edit_distance_matrix[index][len2];
    
}

int main(){
    
    string string1, string2;
    cout<<"Enter 2 strings:"<<endl;
    cin>>string1>>string2;
    
    cout<<"Value of edit distance of strings '"<<string1<<"' and '"<<string2<<"' is "<<edit_distance(string1, string2);
    
}
