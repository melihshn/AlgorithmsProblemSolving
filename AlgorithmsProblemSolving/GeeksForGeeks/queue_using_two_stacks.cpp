//https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1

void StackQueue :: push(int x)
 {
    s1.push(x);
 }
int StackQueue :: pop()
{
    int top1;
    
    if(s1.empty())
        return -1;
    
    while(!s1.empty()){
        top1 = s1.top();
        s2.push(top1);
        s1.pop();
    }
    s2.pop();
    
    while(!s2.empty()){
        int top2 = s2.top();
        s1.push(top2);
        s2.pop();
    }
    return top1;
}
