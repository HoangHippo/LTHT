//using System;
//using System.Collections.Generic;
//using System.Text;
//using System.Management;

//namespace btn
//{
//    class b15
//    {
//        public static void mem()
//        {
//            ObjectQuery winQuery = new ObjectQuery("SELECT * FROM Win32_LogicalMemoryConfiguration");

//            ManagementObjectSearcher searcher = new ManagementObjectSearcher(winQuery);

//            foreach (ManagementObject item in searcher.Get())
//            {
//                Console.WriteLine("Total Space = " + item["TotalPageFileSpace"]);
//                Console.WriteLine("Total Physical Memory = " + item["TotalPhysicalMemory"]);
//                Console.WriteLine("Total Virtual Memory = " + item["TotalVirtualMemory"]);
//                Console.WriteLine("Available Virtual Memory = " + item["AvailableVirtualMemory"]);
//            }
//            Console.Read();
//        }
//    }
//}
