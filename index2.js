// 循环枚举

function Circle(radius) {
    this.radius = radius;
    this.draw = function() {
        console.log("draw");
    }
}

const circle = new Circle(10);

// in访问key，of访问value
for (let key in circle) console.log(key);

for (let value of circle) console.log(value);