    public static int howManyGames(int p, int d, int m, int s)
    {
        // Return the number of games you can buy
        int count = 0;

        // while (s >= p) {
        //     count++;
        //     s -= p;
        //     p -= d;
        //     if (p < m) {
        //         p = m;
        //     }
        // }
        
        // while (s >= p)
        // {
        //     s -= p;
        //     p = Math.Max(p-d, m);
        //     count++;
        // }
    
        while (s >= p) {
            count++;
            s -= p;
            p -= d;
            if (p < m) {
                p = m;
                count += s / p;
                s %= p;
            }
        }
                
        return count;
    }
