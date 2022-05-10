class Solution {
public:
    string intToRoman(int num) {
    
        vector<int> in={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> roman={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string str="";
        for(int i=0;i<in.size();i++){
            int k=num/in[i];
            num =num%in[i];
            for(int j=0;j<k;j++){
               str+=roman[i];
            }
        }
        return str;
    }
};