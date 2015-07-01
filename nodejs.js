// Laziest Coding Standard for C++ source file.
//
// Copyright (c) Huan Du (http://huandu.me/+). All rights reserved.
// Licensed under a Creative Commons Attribution 3.0 Unported License.

var express = require("express");
var app = express();

function ExpressHandler(req, res) {
    this.req = req;
    this.res = res;
}

// Bind a handler with a callback function.
// After binding, fn can use `this.req` and `this.res` to visit
// original req and res objects.
ExpressHandler.prototype.next = function(fn) {
    var self = this;
    return function() {
        fn.apply(self, arguments);
    };
};

function wrap(fn) {
    return function(req, res) {
        fn.call(new ExpressHandler(req, res));
    };
}

app.get("/", wrap(function(req, res) {
    var res = this.res;
    res.send("This is a sample code for node.js.");
}));

var server = app.listen(3000, function() {
    var host = server.address().address;
    var port = server.address().port;

    console.log("Example app listening at http://%s:%s", host, port);
});

module.exports = app;
