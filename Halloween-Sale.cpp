int howManyGames(int p, int d, int m, int s) {
    int result = 0;
    if (s < p)
    {
        return result;
    }
    
    while (s >= p)
    {
        result++;
        s = s - p;
        if (p > m)
        {
            p = p - d;
        }
        if (p < m)
        {
            p = m;
        }
    }
    return result;
}
