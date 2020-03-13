//https://practice.geeksforgeeks.org/problems/special-stack/1

bool isFull(int n)
{
     if(s.size() == n)
        return 1;
     return 0;
}
bool isEmpty()
{
    if(s.empty())
        return 1;
    return 0;
}
int pop()
{
    int top = s.top();
    s.pop();
    return top;
}
int getMin()
{
    int min = pop();
    
   while(!isEmpty()){
       
       int x = pop();
       
       if(x < min)
            min = x;
   }
   return min;
}
