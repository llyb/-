// js 中有两种类型：值类型和引用类型
// 值类型：Number, String, Boolean, Symbol, undefined, null
// 引用类型：Object, Function, Array

// 值类型：数据存储在该变量中，每个数据是相互独立的
// 引用类型：数据存储在内存中，该变量存储的只是它的地址，所以指向该地址的所有变量是相关联的

let obj = { value: 10 };

function increase(obj) {
    obj.value ++;
}

increase(obj);
console.log(obj);

// 点表示法和中括号表示法
const circle = {};
circle.location = { x: 1 };
circle['propertyName'] = { x: 1 };
console.log(circle.location);
console.log(circle['propertyName']);

// 删除属性的方法
delete circle.location;
console.log(circle.location);