// 创建对象的两种方式：工厂函数和构造函数

// 工场函数：生成一个创建对象的函数用原来简化代码，否则我们要时想创建多个对象就需要单独写很多个
function createCircle(radius) {
    return {
        radius, // key和value相同时可以不用写
        draw: function() {
            console.log("draw");
        }
    };
}

const circle = createCircle(1);

// circle.constructor : Object函数
// 原因在于我们内部使用了对象的创建语法，他又是使用Object这个构造函数创建的，即Object为内置构造函数
// let x = {}; <==> let x = new Objext();
// 内置构造函数:
// new String; 但我们经常直接使用 ""，''，``而不是构造函数
// new Boolean(); true, false;
// new Number(); 1, 2, 3 
// 每个对象都有一个构造函数属性，它引用了创建对象的函数

circle.draw();

// 构造函数法创建对象，用这种方法的约定是函数名使用驼峰命名法
function Circle(radius) {
    // console.log('this',this);
    // 里面用this来设置该对象的属性，是对执行这段代码的对象的引用
    this.radius = radius;
    this.draw = function() {
        console.log("draw");
    }
    // return this; // 当我们使用new运算符时这将自动发生
}

// new运算符会创建一个空对象 {},然后它会将this指向那个对象，最后从该函数返回该对象
// this对象默认情况下是指向全局对象的，在浏览器中运行指向window对象，在nodejs中指向globle
const another = new Circle(1);

// another.constructor = 当前函数

function Circle(radius) {
    this.radius = radius;
    this.draw = function() {
        console.log("draw");
    }
}

// Circle.constructor = Function

// 紫色图标是绑定和应用等方法，蓝色是属性
// js中的函数是对象，函数名是对Function对象的引用
// 上面的对象就像当与这样的一个构造函数
const Circle1 = new Function('radius',`
    this.radius = radius;
    this.draw = function() {
    console.log("draw");
}
`); // 传入多行数据用``

const circle = new Circle1(1);

circle.draw();