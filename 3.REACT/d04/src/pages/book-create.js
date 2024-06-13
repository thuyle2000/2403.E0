import { useState } from "react"
import { useNavigate } from "react-router-dom"

export default function BookCreate({ dbs }) {
    const formStyle = { width: "40%", margin: "auto", background: "lightcyan" }
    const history = useNavigate();
    let [id, setID] = useState("B00");
    let [title, setTitle] = useState("DBMS - SQL");
    let [author, setAuthor] = useState("unknown");
    let [price, setPrice] = useState(100);

    const fnSubmit = (ev) => {
        ev.preventDefault();

        let newObject = { "id": id, "title": title, "author": author, "price": price };
        dbs.push(newObject);
        alert('adding new book succeeded !');

        history("/book-view");  // hien thi page 'book view'
    }
    return (
        <div>
            <h3>
                Create New Books
            </h3>
            <form style={formStyle} onSubmit={fnSubmit} >
                <div className="mt-3">
                    <label className="form-label">book ID</label>
                    <input className="form-control" pattern="B\d{2}" required
                        onChange={(ev) => setID(ev.target.value)}
                        value={id} />
                </div>
                <div className="mt-3">
                    <label className="form-label">book title</label>
                    <input className="form-control" required
                        onChange={(ev) => setTitle(ev.target.value)}
                        value={title} />
                </div>
                <div className="mt-3">
                    <label className="form-label">authors</label>
                    <input className="form-control" required
                        onChange={(ev) => setAuthor(ev.target.value)}
                        value={author} />
                </div>
                <div className="mt-3">
                    <label className="form-label">price</label>
                    <input className="form-control" type="number" min="0" required
                        onChange={(ev) => setPrice(ev.target.value)}
                        value={price} />
                </div>
                <div className="mt-3">
                    <button className="btn btn-danger"> submit </button>
                </div>
            </form>
        </div>
    )
}