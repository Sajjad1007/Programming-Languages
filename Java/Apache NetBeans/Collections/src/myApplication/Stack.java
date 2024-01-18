package myApplication;

class Stack {
    
    private int top;
    private int[] ara;
    
    public Stack(int size)
    {
        top = -1;
        ara = new int[size];
    }
    
    public void push(int num) throws StackOverflow
    {
        if(top == ara.length-1){
            throw new StackOverflow();
        }
        ara[++top] = num;
    }
    
    public int pop() throws StackUnderflow
    {
        if(top == -1){
            throw new StackUnderflow();
        }
        return ara[top--];
    }
    
    void print()
    {
        for(int i = top; i >= 0; --i){
            System.out.print(ara[i] + " ");
        }
        System.out.println();
    }
    
}

class StackOverflow extends Exception
{
    
    @Override
    public String getMessage()
    {
        return "Stack is full";
    }
    
}

class StackUnderflow extends Exception
{
    
    @Override
    public String getMessage()
    {
        return "Stack is empty";
    }
    
}


