/**
 * hash_djb2 - Implementation of the djb2 algorithm
 * @str: String used to generate hash value
 * Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
	{
		hash = ((hash << 5) + hash) + x;
	}
    return (hash);
}