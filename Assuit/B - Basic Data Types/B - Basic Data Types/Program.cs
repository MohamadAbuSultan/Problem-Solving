namespace B___Basic_Data_Types
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Read a single line of space-separated values
            string inputLine = Console.ReadLine();

            // Split the input line into individual values
            string[] values = inputLine.Split(' ');

            if (values.Length == 5)
            {
                // Parse each value and print them on separate lines
                int intValue = int.Parse(values[0]);
                long longValue = long.Parse(values[1]);
                char charValue = char.Parse(values[2]);
                float floatValue = float.Parse(values[3]);
                double doubleValue = double.Parse(values[4]);

                // Print each value on a new line
                Console.WriteLine(intValue);
                Console.WriteLine(longValue);
                Console.WriteLine(charValue);
                Console.WriteLine(floatValue.ToString("F1")); // Format as specified
                Console.WriteLine(doubleValue.ToString("F1")); // Format as specified
            }
            else
            {
                Console.WriteLine("Input format error.");
            }
        }
    }
}