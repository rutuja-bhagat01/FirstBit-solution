package com.firstbit.inheritanceBuilding;

class Building {
	String name;
	String location;
	int floors;
	double totalAreaSqM;
	double costPerSqM;
	String owner;
	int yearOfConstruction;

	// default constructor
	public Building() {
		System.out.println("Building default constructor called...");
		name = "Not Assigned";
		location = "Unknown";
		floors = 0;
		totalAreaSqM = 0.0;
		costPerSqM = 0.0;
		owner = "NA";
		yearOfConstruction = 0;
	}

	// parameterized constructor
	Building(String name, String location, int floors, double totalAreaSqM, double costPerSqM, String owner,
			int yearOfConstruction) {
		super();
		this.name = name;
		this.location = location;
		this.floors = floors;
		this.totalAreaSqM = totalAreaSqM;
		this.costPerSqM = costPerSqM;
		this.owner = owner;
		this.yearOfConstruction = yearOfConstruction;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getLocation() {
		return location;
	}

	public void setLocation(String location) {
		this.location = location;
	}

	public int getFloors() {
		return floors;
	}

	public void setFloors(int floors) {
		this.floors = floors;
	}

	public double getTotalAreaSqM() {
		return totalAreaSqM;
	}

	public void setTotalAreaSqM(double totalAreaSqM) {
		this.totalAreaSqM = totalAreaSqM;
	}

	public double getCostPerSqM() {
		return costPerSqM;
	}

	public void setCostPerSqM(double costPerSqM) {
		this.costPerSqM = costPerSqM;
	}

	public String getOwner() {
		return owner;
	}

	public void setOwner(String owner) {
		this.owner = owner;
	}

	public int getYearOfConstruction() {
		return yearOfConstruction;
	}

	public void setYearOfConstruction(int yearOfConstruction) {
		this.yearOfConstruction = yearOfConstruction;
	}

	// to display
	void showBuildingInfo() {
		System.out.println("Building Name : " + name);
		System.out.println("Location : " + location);
		System.out.println("Floors : " + floors);
		System.out.println("Total Area : " + totalAreaSqM + " sq.m");
		System.out.println("Cost per Sq.m : Rs " + costPerSqM);
		System.out.println("Year of construction : " + yearOfConstruction);

	}

	double calculateTotalCost() {
		return totalAreaSqM * costPerSqM;
	}
}// class Building ends here
//--------------------------------------------------

class ResidentialBuilding extends Building {
	int noOfFlats;
	String type;

	// default const.
	ResidentialBuilding() {
		super();
		System.out.println("Residential Building default constructor called...");
		noOfFlats = 10;
		type = "Unknown";
	}

	// para. const.
	ResidentialBuilding(String name, String location, int floors, double totalAreaSqM, double costPerSqM, String owner,
			int yearOfConstruction, int noOfFlats, String type) {
		super(name, location, floors, totalAreaSqM, costPerSqM, owner, yearOfConstruction);
		System.out.println("Residential para. const called...");
		this.noOfFlats = noOfFlats;
		this.type = type;
	}

	
	public int getNoOfFlats() {
		return noOfFlats;
	}

	public void setNoOfFlats(int noOfFlats) {
		this.noOfFlats = noOfFlats;
	}

	public String getType() {
		return type;
	}

	public void setType(String type) {
		this.type = type;
	}

	void showResidentialDetails() {
		super.showBuildingInfo();
		System.out.println("Number of flats: " + noOfFlats);
		System.out.println("Type of flat: " + type);
		System.out.println("Total cost of building construction : " + calculateTotalCost());
	}
}// class ResidentialBuilding ends here
//----------------------------------------------------------

class CommercialBuilding extends Building {
	int noOfOffices;
	String businessType;
	double rentPerSqM;

	// default const.
	CommercialBuilding() {
		super();
		System.out.println("Commercial building default const. called...");
		noOfOffices = 5;
		businessType = "Unknown";
		rentPerSqM = 0.0;
	}

	// para. const
	CommercialBuilding(String name, String location, int floors, double totalAreaSqM, double costPerSqM, String owner,
			int yearOfConstruction, int noOfOffices, String businessType, double rentPerSqM) {
		super(name, location, floors, totalAreaSqM, costPerSqM, owner, yearOfConstruction);
		this.noOfOffices = noOfOffices;
		this.businessType = businessType;
		this.rentPerSqM = rentPerSqM;
	}

	public int getNoOfOffices() {
		return noOfOffices;
	}

	public void setNoOfOffices(int noOfOffices) {
		this.noOfOffices = noOfOffices;
	}

	public String getBusinessType() {
		return businessType;
	}

	public void setBusinessType(String businessType) {
		this.businessType = businessType;
	}

	public double getRentPerSqM() {
		return rentPerSqM;
	}

	public void setRentPerSqM(double rentPerSqM) {
		this.rentPerSqM = rentPerSqM;
	}

	
	void showCommercialDetails() {
		super.showBuildingInfo();
		System.out.println("Number of offices : " +noOfOffices);
		System.out.println("Business type of office : " +businessType);
		System.out.println("Rent for office : " + rentPerSqM+" Sq.m");
		System.out.println("Total cost of construction : "+calculateTotalCost());
	}
}//class CommercialBuilding ends here

class DemoInheritanceBuilding
{
	public static void main(String[] args) {
		System.out.println("*** Using Default constrctor***");
		ResidentialBuilding rb1 = new ResidentialBuilding();
		//rb1.showBuildingInfo();
		rb1.showResidentialDetails();
		
		System.out.println("\n*** Using Parameterized constructor***");
		CommercialBuilding cb1 = new CommercialBuilding("TechPark Tower","Banglore",20,15500.60,60000.75,
				"Infosys Pvt Ltd",2023,50,"IT Park",2200.0);
		//cb1.showBuildingInfo();
		cb1.showCommercialDetails();
	}
}
