/**
 * The MIT License (MIT)
 * 
 * Copyright (c) 2013 Christian Speckner <cnspeckn@googlemail.com>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef BINDINGS_BOOK_WRAPPER_H
#define BINDINGS_BOOK_WRAPPER_H

#include "common.h"
#include "book.h"

namespace node_libxl {


class BookWrapper{
    public:

        BookWrapper(v8::Handle<v8::Value> bookHandle);
        ~BookWrapper();

        v8::Handle<v8::Value> GetBookHandle() {
            return bookHandle;
        }

        Book* GetBook() {
            return Book::Unwrap(bookHandle);
        }

    protected:

        v8::Persistent<v8::Value> bookHandle;

    private:

        BookWrapper();
        BookWrapper(const BookWrapper&);
        const BookWrapper& operator=(const BookWrapper&);
};


}

#endif // BINDINGS_BOOK_WRAPPER_H
