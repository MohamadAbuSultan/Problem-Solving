namespace A___Say_Hello_With_C__
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Your Name : ");
            string name = Console.ReadLine();
            Console.Write($"Hello, {name}");
        }
    }
}