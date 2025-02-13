class ElectricalElement:
    def __init__(self,symbol):
        self.symbol=symbol

class Resistor(ElectricalElement):
    def __init__(self, resistance):
        super().__init__("R")
        self.resistance=resistance

n=int(input("n="))
resistors= []
print("resistance value: ")
for  i in range(n):
    resistors.append(Resistor(float(input("resistor:"))))
print("equivalent resistance: "+ str(sum([resistor.resistance for resistor in resistors])))