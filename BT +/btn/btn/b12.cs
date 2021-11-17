using System;
using System.Collections.Generic;
using System.Text;

namespace btn
{
    class b12
    {
        public static void queue()
        {
            Queue<int> Q = new Queue<int>(200);
            while (true) { 
                Random r2 = new Random();
                int m = r2.Next();
                Q.Enqueue(m);
                if (m % 2 == 0)
                {
                    break;
                }
            }
            int Length = Q.Count;
            for (int i = 0; i < Length; i++)
            {
                Console.Write(" " + Q.Dequeue());
            }
        }
    }
}
