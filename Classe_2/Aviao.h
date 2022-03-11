#pragma once
class Aviao
{
public:
	int vel = 0;
	int velMax;
	std::string tipo;
	Aviao(int tp);
	void imprimir();

private:

};

Aviao::Aviao(int tp) { //1:Jato  2:Airbus  3:Planador
	if (tp == 1) {
		this->velMax = 800;
		this->tipo = "Jato";
	}
	else if (tp == 2) {
		this->velMax = 400;
		this->tipo = "Airbus";
	}
	else if (tp == 3) {
		this->velMax = 200;
		this->tipo = "Planador";
	}
}

void Aviao::imprimir() {
	std::cout << "Tipo.............:" << tipo << "\n";
	std::cout << "Velocidade Atual.:" << vel << "\n";
	std::cout << "Velocidade Maxima:" << velMax << "\n";
}

