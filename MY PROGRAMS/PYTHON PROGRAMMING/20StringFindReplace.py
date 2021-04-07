line="Rupali Vinod Joshi"
line1="Rupali Vinod Joshi , How are you ? Joshi"

print(line.replace(" ","_"))
print(line.replace("Vinod Joshi","Sumit Mahajan"))
print(line1.find("Joshi"))
print(line1.find("Joshi",14))

firstjoshi=line1.find("Joshi")
secondjoshi=line1.find("Joshi",firstjoshi+1)

print(firstjoshi)
print(secondjoshi)

