def calcular_expedicao(dinheiro):
    preco_canhao = 10000
    preco_polvora = 2000
    preco_espada = 1500

    canhoes = dinheiro // preco_canhao
    saldo = dinheiro % preco_canhao
    
    polvora = saldo // preco_polvora
    saldo = saldo % preco_polvora
    
    espadas = saldo // preco_espada
    
    return int(canhoes), int(polvora), int(espadas)

disponivel = float(input("digite o valor disponivel: "))
c, p, e = calcular_expedicao(disponivel)
print(f"Canhões: {c}, Pólvora (kg): {p}, Espadas: {e}")
