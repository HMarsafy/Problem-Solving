int pageCount(int n, int p) {
    int front = p / 2 ;
    int back = 0;
    if(!((n-1)%2 == 0))
        {
            if(n == p) return back;
            else {
            n = n - 1;
            back++;
            }
        }
    for(int i = 0 ; i < p/2 ; i++)
        {   
                if(p==n || (n-1)==p)
                    {
                    break;
                    }
                back++;
                n-=2;
            
        }
        if(back > front) return front;
        return back;
}
