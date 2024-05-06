class Solution {
public:
    string intToRoman(int num) 
    {
        //create a map so that it can be solved in O(1)
        string thou[]={"","M","MM","MMM"};
        string hund[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX","x"};
        string result="";
        result = thou[num/1000]+hund[(num%1000)/100]+tens[(num%100)/10]+ones[num%10];
        return result;
    }
};