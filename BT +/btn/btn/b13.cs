using System;
using System.Collections.Generic;
using System.Text;

namespace btn
{
    class b13
    {
        public static void stack()
        {
            Stack<int> S = new Stack<int>(200);
            while (true)
            {
                Random r2 = new Random();
                int m = r2.Next();
                S.Push(m);
                if (m % 2 == 0)
                {
                    break;
                }
            }
            int Length = S.Count;
            for (int i = 0; i < Length; i++)
            {
                Console.Write(" " + S.Pop());
            }
        }
    }
}
