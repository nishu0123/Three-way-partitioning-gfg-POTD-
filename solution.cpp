class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        //but i have done cheating i should do it without usign the space but i have used 
        //the space so there might be some approach in which it can be done without using the 
        //extra spaces
        
  
    vector<int> v1, v2, v3;
    int i = 0;
    int n = array.size();
    for(i=0; i<n; i++)
    {
        if(array[i] < a)
        {
            v1.push_back(array[i]);
        }
        else if(array[i] > b)
        {
            v3.push_back(array[i]);
        }
        else{
            v2.push_back(array[i]);
        }
    }
    int cnt = 0;
    for(i=0; i<v1.size(); i++)
    {
        array[cnt] = v1[i];
  //      cout<<array[cnt]<<" ";
        cnt++;
        
    }
    
     for(i=0; i<v2.size(); i++)
    {
        array[cnt] = v2[i];
    //     cout<<array[cnt]<<" ";
        cnt++;
    }
    
     for(i=0; i<v3.size(); i++)
    {
        array[cnt] = v3[i];
    //     cout<<array[cnt]<<" ";
        cnt++;
    }
    
        // code here 
    }
};
