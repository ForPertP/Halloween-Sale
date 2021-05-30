int howManyGames(int p, int d, int m, int s)
{
    int count = 0;
    
    while (s >= p)
    {
        s -= p;
        p = std::max(p-d, m);
        count++;
    }
    
    return count;
}
