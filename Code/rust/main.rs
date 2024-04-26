use std::io;

fn fun(x: i32) {
    if x < 10 {
        println!("Hello World");
    } else {
        println!("{} is greater than or equal to 10", x);
    }
}

fn main() {
    let mut input = String::new();
    println!("Please enter an integer:");

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    let x: i32 = match input.trim().parse() {
        Ok(x) => x,
        Err(_) => {
            println!("Invalid input. Using default value of 10.");
            10 // Default value if parsing fails
        }
    };
    fun(x);
}
