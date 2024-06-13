import { useState } from "react"


export default function BookView({ dbs }) {
    let [db, setDB] = useState(dbs);
    let [sname, setName] = useState("");


    const fnRemove = (bookID) => {
        if (window.confirm("are u sure ?")) {
            let index = dbs.map(x => x.id).indexOf(bookID);
            dbs.splice(index, 1);

            setDB(db.filter(x => x.id !== bookID));
        }
    }

    const fnSearch = (ev) => {
        setDB(dbs.filter(x => x.title.includes(sname)));
    }

    return (
        <div>
            <h3>
                List of Books
            </h3>

            <p>
                <input onChange={(ev) => setName(ev.target.value)} />
                <button className="btn btn-warning" onClick={fnSearch} type="button">Search</button>
            </p>

            <table className="table table-striped table-hover">
                <thead>
                    <tr>
                        <th>id</th>
                        <th>title</th>
                        <th>author</th>
                        <th>price</th>
                        <th>action</th>
                    </tr>
                </thead>

                <tbody>
                    {
                        db.map(x =>
                            <tr>
                                <td>{x.id}</td>
                                <td>{x.title}</td>
                                <td>{x.author}</td>
                                <td>{x.price}</td>
                                <td>
                                    <button className="btn btn-info"
                                        onClick={(ev) => fnRemove(x.id)}
                                    >delete</button>
                                </td>
                            </tr>
                        )
                    }
                </tbody>
            </table>
        </div>
    )
}