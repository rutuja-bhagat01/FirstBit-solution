package com.firstbit.inheritancePlant;

class Plant {

	String name;
	double height;
	String type;

	Plant() {
		System.out.println("Plant default constructor called...");
		name = "Unknown";
		height = 0.0;
		type = "Generic";
	}

	Plant(String name, double height, String type) {
		this.name = name;
		this.height = height;
		this.type = type;
	}

	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public double getHeight() {
		return height;
	}

	public void setHeight(double height) {
		this.height = height;
	}

	public String getType() {
		return type;
	}

	public void setType(String type) {
		this.type = type;
	}

	void showDetails() {
		System.out.println("Plant Name: " + name);
		System.out.println("Height: " + height + " m");
		System.out.println("Type: " + type);
	}
}//class Plant ends here
//*********************************************************

class FlowerPlant extends Plant {
	String flowerColor;
	String bloomingSeason;

	FlowerPlant() {
		super();
		System.out.println("FlowerPlant default constructor called...");
		flowerColor = "Unknown";
		bloomingSeason = "All year";
	}

	FlowerPlant(String name, double height, String type, String flowerColor, String bloomingSeason) {
		super(name, height, type);
		this.flowerColor = flowerColor;
		this.bloomingSeason = bloomingSeason;
	}

	
	public String getFlowerColor() {
		return flowerColor;
	}

	public void setFlowerColor(String flowerColor) {
		this.flowerColor = flowerColor;
	}

	public String getBloomingSeason() {
		return bloomingSeason;
	}

	public void setBloomingSeason(String bloomingSeason) {
		this.bloomingSeason = bloomingSeason;
	}

	void showFlowerDetails() {
		super.showDetails();
		System.out.println("Flower Color: " + flowerColor);
		System.out.println("Blooming Season: " + bloomingSeason);
	}
}//class FlowerPlant Ends here
//*******************************************************

class FruitPlant extends Plant {
	String fruitName;
	String taste;

	FruitPlant() {
		super();
		System.out.println("FruitPlant default constructor called...");
		fruitName = "Unknown";
		taste = "Neutral";
	}

	FruitPlant(String name, double height, String type, String fruitName, String taste) {
		super(name, height, type);
		this.fruitName = fruitName;
		this.taste = taste;
	}

	
	public String getFruitName() {
		return fruitName;
	}

	public void setFruitName(String fruitName) {
		this.fruitName = fruitName;
	}

	public String getTaste() {
		return taste;
	}

	public void setTaste(String taste) {
		this.taste = taste;
	}

	void showFruitDetails() {
		super.showDetails();
		System.out.println("Fruit Name: " + fruitName);
		System.out.println("Taste: " + taste);
	}
}//class FruitPlant ends here
//**********************************************************

class DemoInheritancePlant {
	public static void main(String[] args) {
		FlowerPlant f1 = new FlowerPlant("Rose", 1.2, "Flowering", "Red", "Winter");
		f1.showFlowerDetails();

		System.out.println("\n-----------------------\n");

		FruitPlant fp1 = new FruitPlant("Mango Tree", 10.5, "Fruit-bearing", "Mango", "Sweet");
		fp1.showFruitDetails();
	}
}


