# Exercicio 1 - carros e motos
# Autor: Cadu 
motos = float(input("Digite o número de motos: "))
carros = float(input("Digite o número de carros: "))

if motos < 4 or carros < 5:
    print("Você tem direito a desconto no IPVA")
elif    motos > 5 and carros > 6:
    print("Não terá desconto no IPVA")
else:
    print("Você NÃO PAGA IPVA")